
/* JUS-GAME ALUtilImp::SetItemSize [source-string] __FILE__="ALUtilImp.h" __FUNCTION__="SetItemSize"
   lines=[56] passed to 1 source-location call(s) */

undefined4 * ALUtilImp::SetItemSize(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 1;
  param_1[1] = 0x10;
  uVar1 = thunk_FUN_0201a228((uint)*(ushort *)((int)param_1 + 10) << 4,s_ALUtilImp_h_021d464c,
                             s_SetItemSize_021d4640,0x38);
  *param_1 = uVar1;
  return param_1;
}

