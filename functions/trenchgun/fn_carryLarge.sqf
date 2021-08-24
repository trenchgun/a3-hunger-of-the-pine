// applies ace drag/carry to a large object
_obj = _this select 0;

[_obj, true, [0, 1, 1], 0] call ace_dragging_fnc_setCarryable;
[_obj, 1] call ace_cargo_fnc_setSize;