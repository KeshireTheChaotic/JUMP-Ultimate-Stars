
void FUN_0219dfc8(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  *(undefined4 *)(DAT_0214ccf8 + 0x1c40) = 0;
  local_8[0] = in_r3;
  uVar1 = FUN_02026f94();
  *(undefined4 *)(DAT_0214ccf8 + 0x1c3c) = uVar1;
  iVar2 = FUN_02031124();
  FUN_02027db0(*(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4),*(undefined4 *)(iVar2 + 4));
  local_8[0] = 0x3000;
  piVar3 = *(int **)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4);
  (**(code **)(*piVar3 + 0xa0))(piVar3,local_8);
  FUN_02028384(*(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4),ALObjectImp::PostMessage);
  FUN_02027834(*(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4),8,
               WiFiGame::WiFiGame_MessObj_MessageFunc);
  return;
}

