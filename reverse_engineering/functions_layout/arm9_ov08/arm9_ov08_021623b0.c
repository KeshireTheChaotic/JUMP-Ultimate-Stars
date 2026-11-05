
void FUN_021623b0(void)

{
  undefined4 uVar1;
  undefined1 auStack_8 [8];
  
  DAT_0216e7f4 = FUN_02166ba8(0x9c,4);
  uVar1 = FUN_021658c4(s_sound_sound_data_sdat_l_0216bd44,auStack_8,0x20);
  *(undefined4 *)(DAT_0216e7f4 + 0x94) = uVar1;
  FUN_0205af64();
  FUN_0205c704(DAT_0216e7f4,*(undefined4 *)(DAT_0216e7f4 + 0x94));
  FUN_0205db80(0);
  FUN_0205b938(DAT_0216e7f4 + 0x90);
  uVar1 = FUN_02167814(0,thunk_FUN_0205af34 + 1,0,200);
  *(undefined4 *)(DAT_0216e7f4 + 0x98) = uVar1;
  return;
}

