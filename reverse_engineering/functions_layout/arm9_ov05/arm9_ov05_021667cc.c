
int FUN_021667cc(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_20;
  int iStack_1c;
  
  iStack_1c = param_4;
  iVar3 = FUN_0203b3f4();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  iVar3 = func_0x021caa0c(s_font_jskfont_aft_02171500,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar3 + 4));
  iVar4 = FUN_021504fc();
  piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
  (**(code **)(*piVar5 + 0x88))(piVar5,param_4 + 1);
  local_20 = 0xa1000;
  FUN_0214d494(iVar4,&local_20);
  FUN_021639a8(iVar4,param_3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
  piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
  (**(code **)(*piVar5 + 0xa8))(piVar5,0);
  piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
  (**(code **)(*piVar5 + 0x84))(piVar5,2);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  if (param_2 != 0) {
    FUN_021500cc(iVar4,param_2);
    FUN_021506ec(param_2,iVar4);
  }
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return iVar4;
}

