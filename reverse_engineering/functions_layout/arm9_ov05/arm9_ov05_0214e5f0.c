
uint FUN_0214e5f0(uint param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(DAT_0214bd80 + 0x34) == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
    param_1 = (uint)*(ushort *)puVar1[0xd];
    *param_2 = param_1;
    param_2 = param_2 + 1;
  }
  if (iVar2 != 0) {
    param_1 = 1;
  }
  *param_3 = iVar2;
  if (iVar2 == 0) {
    param_1 = 0;
  }
  return param_1;
}

