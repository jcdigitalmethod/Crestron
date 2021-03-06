﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Crestron.SimplSharp;

namespace ssl_Utility
{
    public delegate void LoadChangedHandler(ushort _id);
    
    public class Area
    {
        public ushort Id { get; protected set; }
        public String Name { get; protected set; }

        public Area()
        {
        }

        public void SetId(ushort id)
        {
            Id = id;
        }

        public void SetName(String name)
        {
            Name = name;
        }
    }

    public class Zone : Area
    {
        public event LoadChangedHandler SwitchLoadChanged;
        public event LoadChangedHandler DimLoadChanged;
        
        public List<SwitchLoad> SwitchLoads { get; private set; }
        public List<DimLoad> DimLoads { get; private set; }

        public Zone()
        {
            SwitchLoads = new List<SwitchLoad>();
            DimLoads = new List<DimLoad>();
        }

        #region Adding elements

        public void AddSwitchLoad(ushort switchLoadId)
        {
            if (switchLoadId == 0) return;
            
            try
            {
                if (!SwitchLoads.Contains(SimplSystem.SwitchLoads[switchLoadId]))
                {
                    SwitchLoads.Add(SimplSystem.SwitchLoads[switchLoadId]);
                    SimplSystem.SwitchLoads[switchLoadId].Changed += SwitchLoadChangedHandler;
                    ErrorLog.Notice("S#: Zone(" + Id +  ") - Added SwitchLoad nr " + switchLoadId);
                }
            }
            catch (Exception ex)
            {
            }
        }

        public void AddDimLoad(ushort dimLoadId)
        {
            if (dimLoadId == 0) return;
            
            try
            {
                if (!DimLoads.Contains(SimplSystem.DimLoads[dimLoadId]))
                {
                    DimLoads.Add(SimplSystem.DimLoads[dimLoadId]);
                    SimplSystem.DimLoads[dimLoadId].Changed += DimLoadChangedHandler;
                    ErrorLog.Notice("S#: Zone(" + Id + ") - Added DimLoad nr " + dimLoadId);
                }
            }
            catch (Exception ex)
            {
            }
        }

        #endregion

        #region Load Change Handlers

        void SwitchLoadChangedHandler(object sender, EventArgs e)
        {
            SwitchLoad switchLoad = (SwitchLoad)sender;
            ushort id = (ushort) SwitchLoads.IndexOf(switchLoad);
            OnSwitchLoadChanged(id);
        }

        void DimLoadChangedHandler(object sender, EventArgs e)
        {
            DimLoad dimLoad = (DimLoad)sender;
            ushort id = (ushort)DimLoads.IndexOf(dimLoad);
            OnDimLoadChanged(id);
        }

        #endregion

        #region Events

        private void OnSwitchLoadChanged(ushort id)
        {
            if (SwitchLoadChanged != null) SwitchLoadChanged(id);
        }

        private void OnDimLoadChanged(ushort id)
        {
            if (DimLoadChanged != null) DimLoadChanged(id);
        }

        #endregion

        #region All On/Off

        public void AllSwitchLoadsOn()
        {
            foreach (SwitchLoad switchLoad in SwitchLoads) switchLoad.On();
        }

        public void AllDimLoadsOn()
        {
            foreach (DimLoad dimLoad in DimLoads) dimLoad.On();
        }

        public void AllLoadsOn()
        {
            AllSwitchLoadsOn();
            AllDimLoadsOn();
        }


        public void AllSwitchLoadsOff()
        {
            foreach (SwitchLoad switchLoad in SwitchLoads) switchLoad.Off();
        }

        public void AllDimLoadsOff()
        {
            foreach (DimLoad dimLoad in DimLoads) dimLoad.Off();
        }

        public void AllLoadsOff()
        {
            AllSwitchLoadsOff();
            AllDimLoadsOff();
        }

        #endregion

    }

    public class ZoneGroup : Area
    {
        public List<Zone> Zones { get; private set; }

        public ZoneGroup()
        {
            Zones = new List<Zone>();
        }
    }

}