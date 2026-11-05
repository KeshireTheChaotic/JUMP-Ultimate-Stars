
void FUN_02165a48(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [36];
  undefined4 local_ac;
  undefined1 auStack_88 [128];
  
  DAT_0216e830 = (undefined4 *)FUN_02166b8c(0xe8,4);
  FUN_02064744(auStack_d0);
  iVar2 = FUN_0206451c(auStack_d0,s_rom__dwc_utility_bin_0216c148);
  if (iVar2 == 0) {
    FUN_02055684();
  }
  uVar1 = FUN_02051fa0();
  *(undefined2 *)(DAT_0216e830 + 0x39) = uVar1;
  FUN_02064430(auStack_d0,&local_e0,8);
  FUN_02064430(auStack_d0,&local_d8,8);
  FUN_020644ec(auStack_d0);
  FUN_02063fc8(DAT_0216e830 + 0x22);
  iVar2 = FUN_02063f20(DAT_0216e830 + 0x22,&DAT_0216aee4,3);
  if (iVar2 == 0) {
    FUN_02055684();
  }
  FUN_02063c0c(DAT_0216e830 + 0x22,FUN_021659a4 + 1,0x602);
  iVar2 = FUN_02063e7c(DAT_0216e830 + 0x22,local_ac,local_d8,local_d4,local_e0,local_dc,
                       FUN_02165978 + 1,&LAB_02165968_1);
  if (iVar2 == 0) {
    FUN_02055684();
  }
  uVar3 = FUN_02063d44(DAT_0216e830 + 0x22,0,0);
  uVar4 = FUN_02166ba8(uVar3,4);
  *DAT_0216e830 = uVar4;
  FUN_02063d44(DAT_0216e830 + 0x22,*DAT_0216e830,uVar3);
  uVar3 = FUN_02166120(0x20,DAT_0216e830 + 1,4);
  DAT_0216e830[0x21] = uVar3;
  FUN_02052c8c(auStack_88,&DAT_0216c160,&DAT_0216aee4);
  FUN_020643b4(auStack_88);
  return;
}

