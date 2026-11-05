
void FUN_02153bc8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  DAT_0217297c = FUN_02010238();
  thunk_FUN_02010254(DAT_0217297c,s_battle_status_icon_aar_02171eec,0);
  iVar1 = FUN_0203b404();
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar3;
  piVar2 = (int *)FUN_02035e88(0x2fd000);
  if (piVar2[0xe] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  DAT_02172978 = piVar2[0xe];
  (**(code **)(**(int **)(DAT_02172978 + 4) + 0x50))(*(int **)(DAT_02172978 + 4),1);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  (**(code **)(**(int **)(DAT_0217297c + 8) + 0x50))();
  return;
}

