
undefined4 FUN_021bf880(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_021d51b8 == 0) {
    uVar1 = FUN_021bfc48();
    uVar2 = FUN_021bfc3c();
    FUN_0205ac6c(0,&DAT_021d51e0,0x70,uVar1,uVar2,8);
    return 0;
  }
  iVar3 = DAT_021d51b8;
  if ((DAT_021d51bc != 0) && (*(int *)(DAT_021d51bc + 0x4bc) != 0)) {
    iVar3 = *(int *)(DAT_021d51bc + 0x4bc);
  }
  DAT_021d51bc = iVar3;
  FUN_021bf968();
  DAT_021d51c6 = *(undefined1 *)(DAT_021d51bc + 0x4b4);
  DAT_021d51c4 = 2;
  return 1;
}

