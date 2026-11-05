
int FUN_021c4588(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_0203b3e4();
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  FUN_021c3394();
  DAT_020a0dd0 = uVar4;
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1b) < 0) {
    unaff_r7 = FUN_021caa0c(s_font_jskfont_aft_021d4560,0,0);
    FUN_021c5fb4(*(undefined4 *)(unaff_r7 + 4));
    iVar1 = FUN_021acab4();
  }
  else {
    FUN_021c5fb4(0);
    iVar1 = FUN_021acab4();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0xc) = *param_2;
  *(undefined4 *)(iVar2 + 0x10) = param_2[1];
  *(undefined4 *)(iVar2 + 0x14) = param_2[2];
  FUN_021acaf8(iVar2,1);
  piVar3 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar3 + 0xa8))(piVar3,param_3);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  local_1c = 0x20000;
  FUN_021bbde0(iVar1,&local_1c);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1b) < 0) {
    (**(code **)(**(int **)(unaff_r7 + 4) + 0xc))();
  }
  FUN_021bc03c();
  return iVar1;
}

