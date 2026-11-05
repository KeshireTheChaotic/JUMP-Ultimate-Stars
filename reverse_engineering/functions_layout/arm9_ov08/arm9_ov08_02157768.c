
void FUN_02157768(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  DAT_0216e714 = FUN_02166ba8(0x1e2a4,0x20);
  *(undefined4 *)(DAT_0216e714 + 0x1e298) = param_1;
  *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 0;
  *(undefined1 *)(DAT_0216e714 + 0x1e2a1) = 0;
  local_28 = DAT_0216b50c;
  local_24 = DAT_0216b510;
  local_20 = DAT_0216b514;
  uStack_1c = DAT_0216b518;
  local_18 = DAT_0216b51c;
  uStack_14 = DAT_0216b520;
  local_10 = DAT_0216b524;
  local_24 = FUN_021574ac(DAT_0216e71c,0);
  local_20 = FUN_021574ac(DAT_0216e71c,1);
  cVar1 = FUN_0215702c();
  local_10 = CONCAT31(local_10._1_3_,cVar1 + '1');
  FUN_02165774(DAT_0216e714,&local_28);
  iVar2 = FUN_02165600();
  if (iVar2 == 0) {
    FUN_02055684();
  }
  uVar3 = FUN_02167814(0,0x2157551,0,0x78);
  *(undefined4 *)(DAT_0216e714 + 0x1e29c) = uVar3;
  return;
}

