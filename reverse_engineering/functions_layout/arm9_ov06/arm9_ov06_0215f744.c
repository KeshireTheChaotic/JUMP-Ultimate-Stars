
void FUN_0215f744(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
    DAT_02093c08 = DAT_02093c08 + -1;
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    iVar1 = FUN_0203b404();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
    piVar2 = (int *)FUN_020329ec(0x500000);
    if (piVar2[6] == 0) {
      (**(code **)(*piVar2 + 0x14))();
    }
    iVar1 = piVar2[6];
    local_38 = 0x4c000;
    piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_38);
    (**(code **)(**(int **)(iVar1 + 4) + 0x94))
              (*(int **)(iVar1 + 4),1 << (uint)*(byte *)(param_1 + 0x1e0));
    FUN_021544c8(iVar1,*(undefined4 *)(param_1 + 0x1bc));
    (**(code **)(**(int **)(iVar1 + 4) + 0xdc))(*(int **)(iVar1 + 4),0xffffffff);
    if (*(char *)(param_1 + 0x1e2) == '\0') {
      *(undefined1 *)(param_1 + 0x1e2) = 1;
      FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215fa80);
      FUN_02027834(*(undefined4 *)(iVar1 + 4),1,FUN_0215fa6c);
      (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1 + 0x1e2);
      local_1c = ((*(int *)(iVar3 + 0x10) >> 8) + -0x10) * 0x1000;
      local_18 = (*(int *)(iVar3 + 0xc) >> 8) << 0xc;
      FUN_021519d0(iVar1,&local_18,&local_1c);
    }
    else if (*(char *)(param_1 + 0x1e3) == '\0') {
      *(undefined1 *)(param_1 + 0x1e3) = 1;
      FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215fa80);
      FUN_02027834(*(undefined4 *)(iVar1 + 4),1,FUN_0215fa6c);
      (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1 + 0x1e3);
      local_24 = ((*(int *)(iVar3 + 0x10) >> 8) + -0x10) * 0x1000;
      local_20 = ((*(int *)(iVar3 + 0xc) >> 8) + -0x18) * 0x1000;
      FUN_021519d0(iVar1,&local_20,&local_24);
    }
    else if (*(char *)(param_1 + 0x1e4) == '\0') {
      *(undefined1 *)(param_1 + 0x1e4) = 1;
      FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215fa80);
      FUN_02027834(*(undefined4 *)(iVar1 + 4),1,FUN_0215fa6c);
      (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1 + 0x1e4);
      local_2c = ((*(int *)(iVar3 + 0x10) >> 8) + -0x10) * 0x1000;
      local_28 = ((*(int *)(iVar3 + 0xc) >> 8) + 0x18) * 0x1000;
      FUN_021519d0(iVar1,&local_28,&local_2c);
    }
    else {
      local_34 = ((*(int *)(iVar3 + 0x10) >> 8) + -0x10) * 0x1000;
      local_30 = (*(int *)(iVar3 + 0xc) >> 8) << 0xc;
      FUN_021519d0(iVar1,&local_30,&local_34);
    }
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 + 0x500044,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
  }
  return;
}

