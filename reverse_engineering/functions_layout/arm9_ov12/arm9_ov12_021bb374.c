
undefined4 FUN_021bb374(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0x2a] == '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  iVar1 = (char)param_1[0x26] * 0x24 + *param_1;
  for (iVar2 = 0; iVar2 < *(char *)((int)param_1 + 0x9e); iVar2 = iVar2 + 1) {
    FUN_020517fc((int)param_1 + iVar2 * 0x2a + 0xcf,0,0x2a);
    FUN_02074024((int)param_1 + iVar2 * 0x2a + 0xcf,
                 iVar1 + 4 + iVar2 * 4 + *(int *)(iVar1 + iVar2 * 4 + 4),(int)param_1 + 0xaa,
                 &DAT_021d3f94,param_4);
  }
  return 0;
}

