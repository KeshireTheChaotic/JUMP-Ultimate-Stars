
void FUN_020880ac(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int local_1c [2];
  
  if (param_1 == 0) {
    param_2 = FUN_02088098();
    if (DAT_0214be24 == 0) {
      param_3 = 0xf7;
      param_4 = 0xb7;
    }
    else {
      param_3 = 0xe7;
      param_4 = 0xb7;
    }
  }
  *(char *)(DAT_0214be20 + 9) = (char)param_1;
  if ((param_2 != *(char *)(DAT_0214be20 + 8)) || (iVar3 = *(int *)(DAT_0214be20 + 4), iVar3 == 0))
  {
    if (param_2 == 0) {
      iVar3 = FUN_0203b3f4();
    }
    else {
      iVar3 = FUN_0203b3e4();
    }
    iVar3 = *(int *)(iVar3 + 0x88);
    *(char *)(DAT_0214be20 + 8) = (char)param_2;
    if (*(int **)(DAT_0214be20 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be20 + 4) + 8))();
    }
    FUN_02078f54();
    DAT_020a0dd0 = *(undefined4 *)(iVar3 + 4);
    iVar3 = FUN_02087c84(0xc00300);
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar1 + 4));
    local_1c[1] = 0x1000;
    FUN_0206c4d4(iVar3,local_1c + 1);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),0xc00300,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    FUN_02028384(*(undefined4 *)(iVar3 + 4),&LAB_02088064_1);
    (**(code **)(**(int **)(iVar3 + 4) + 0x94))(*(int **)(iVar3 + 4),0x1000);
    *(int *)(DAT_0214be20 + 4) = iVar3;
    FUN_0206c54c();
    iVar1 = *(int *)(*(int *)(iVar3 + 4) + 100);
    piVar2 = *(int **)(iVar1 + 0x2c);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_02036430(*(undefined4 *)(iVar1 + 0x20));
    }
    if (piVar2[6] == 0) {
      (**(code **)(*piVar2 + 0x10))();
    }
    FUN_02051890(*(int *)(*(int *)(piVar2[6] + 4) + 0x10) + 6,DAT_0214be20 + 0x10,0x10);
    FUN_02051890(DAT_0214be20 + 0x10,DAT_0214be20 + 0x30,0x20);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  }
  local_20 = param_4 << 0xc;
  local_1c[0] = param_3 << 0xc;
  FUN_0206c9f8(iVar3,local_1c,&local_20);
  return;
}

