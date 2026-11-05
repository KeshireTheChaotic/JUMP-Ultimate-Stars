
undefined4 FUN_02181e2c(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) {
    return 2;
  }
  if (*(int *)(iVar2 + 0x108) != 0) {
    FUN_02002488(param_3,0,0x210);
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    FUN_0218912c(param_1,s_Invalid_status__021a4e48);
    return 2;
  }
  if ((param_2 < 0) || (*(int *)(iVar2 + 0x430) <= param_2)) {
    FUN_0218912c(param_1,s_Invalid_index__021a4e58);
    return 2;
  }
  puVar1 = (undefined4 *)FUN_021874e4();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0218912c(param_1,s_Invalid_index__021a4e58);
    return 2;
  }
  iVar2 = puVar1[2];
  if (iVar2 == 0) {
    FUN_02002068(s_buddyStatus_021a4e68,&DAT_021a4e74,0,0x5cf);
  }
  *param_3 = *puVar1;
  param_3[1] = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(iVar2 + 8) == 0) {
    Reset = 0;
  }
  else {
    FUN_02189478(param_3 + 2,*(int *)(iVar2 + 8),0x100);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    Reset = 0;
  }
  else {
    FUN_02189478(param_3 + 0x42,*(int *)(iVar2 + 0xc),0x100);
  }
  param_3[0x82] = *(undefined4 *)(iVar2 + 0x10);
  param_3[0x83] = *(undefined4 *)(iVar2 + 0x14);
  return 0;
}

