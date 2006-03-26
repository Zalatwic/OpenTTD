/* $Id$ */

#include "stdafx.h"
#include "openttd.h"
#include "station_map.h"


StationType GetStationType(TileIndex t)
{
	assert(IsTileType(t, MP_STATION));
	if (IsRailwayStation(t)) return STATION_RAIL;
	if (IsHangar(t)) return STATION_HANGAR;
	if (IsAirport(t)) return STATION_AIRPORT;
	if (IsTruckStop(t)) return STATION_TRUCK;
	if (IsBusStop(t)) return STATION_BUS;
	if (IsOilRig(t)) return STATION_OILRIG;
	if (IsDock(t)) return STATION_DOCK;
	assert(IsBuoy_(t));
	return STATION_BUOY;
}
