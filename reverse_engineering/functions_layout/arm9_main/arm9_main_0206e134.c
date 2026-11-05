
void FUN_0206e134(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_02070f7c();
  DAT_020afcb0 = FUN_02026f94();
  local_c = 0x80000;
  (**(code **)(**(int **)(DAT_020afcb0 + 4) + 0xa0))(*(int **)(DAT_020afcb0 + 4),&local_c);
  FUN_02028384(*(undefined4 *)(DAT_020afcb0 + 4),jus_Scene_Update);
  DAT_020afcc0 = 0;
  DAT_020afcb4 = 0;
  iVar1 = FUN_0206dd30();
  if (iVar1 == 0) {
    DAT_020afe3c = 0;
  }
  else {
    DAT_020afcc0 = 2;
    FUN_0206e524(1,0x23,0xffffffff,0xffffffff,0xd);
  }
  return;
}

