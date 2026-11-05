
/* JUS-GAME CommGame::CommInit [source-string] __FILE__="CommGame.cpp" __FUNCTION__="CommInit"
   lines=[] passed to 1 source-location call(s) */

void CommGame::CommInit(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
                    /* JUS-TAG strings=["CommGame.cpp","CommInit"] */
  uStack_8 = in_r3;
  FUN_02087968();
  DAT_0214ccec = jus_AllocDebug(0x60,s_CommGame_cpp_020a056c,s_CommInit_020a0538,0x2a4);
  if (DAT_0214ccec != 0) {
    *(undefined4 *)(DAT_0214ccec + 0x18) = 0;
    *(undefined4 *)(DAT_0214ccec + 0x1c) = 0;
    *(undefined4 *)(DAT_0214ccec + 0x20) = 0;
  }
  MIi_CpuClear32(0,DAT_0214ccec,0x60);
  *(undefined4 *)(DAT_0214ccec + 0x24) = 0;
  uVar1 = FUN_02026f94();
  *(undefined4 *)(DAT_0214ccec + 0x28) = uVar1;
  iVar2 = FUN_02031124();
  FUN_02027db0(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x28) + 4),*(undefined4 *)(iVar2 + 4));
  local_c = 0x2000;
  FUN_02012940(*(undefined4 *)(DAT_0214ccec + 0x28),&local_c);
  FUN_02028384(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x28) + 4),&LAB_0208a6f8_1);
  FUN_02027834(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x28) + 4),8,&LAB_0208a834_1);
  uVar1 = FUN_02026f94();
  *(undefined4 *)(DAT_0214ccec + 0x2c) = uVar1;
  iVar2 = FUN_02031124();
  FUN_02027db0(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x2c) + 4),*(undefined4 *)(iVar2 + 4));
  local_10 = 0x2000;
  FUN_02012940(*(undefined4 *)(DAT_0214ccec + 0x2c),&local_10);
  FUN_02028384(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x2c) + 4),0x208b5ed);
  FUN_02027834(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x2c) + 4),8,&LAB_0208a834_1);
  *(undefined1 *)(DAT_0214ccec + 0x49) = 0;
  *(undefined1 *)(DAT_0214ccec + 0x4a) = 0;
  DAT_0214cce2 = 0;
  DAT_0214cce0 = 0;
  *(undefined4 *)(DAT_0214ccec + 0x4c) = 4;
  thunk_FUN_02002488(DAT_0214ccec + 0x30,0xff,0xc);
  thunk_FUN_02002488(DAT_0214ccec + 0x3c,0xff,0xc);
  CommLib::CommLibInit();
  FUN_02089cc4(0x341);
  DAT_020afeb8 = 1;
  return;
}

