
void FUN_02087b84(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20 [3];
  
                    /* JUS-TAG source_file_inferred="CommWrap.cpp" */
  local_28 = 0;
  if (-1 < *(char *)(DAT_0214be24 + 4)) {
    local_28 = (int)*(char *)(DAT_0214be24 + 4);
  }
  local_20[2] = param_4;
  if (param_1 == 0) {
    param_2 = FUN_02087b70();
    param_3 = 0xf7;
    param_4 = 0xb7;
  }
  *(char *)(DAT_0214be24 + 0x1a) = (char)param_1;
  if ((param_2 != *(char *)(DAT_0214be24 + 0x18)) ||
     (iVar2 = *(int *)(DAT_0214be24 + 0x10), iVar2 == 0)) {
    if (param_2 == 0) {
      iVar2 = FUN_0203b3f4();
    }
    else {
      iVar2 = FUN_0203b3e4();
    }
    iVar2 = *(int *)(iVar2 + 0x88);
    *(char *)(DAT_0214be24 + 0x18) = (char)param_2;
    if (*(int **)(DAT_0214be24 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 0x10) + 8))();
    }
    FUN_02078f54();
    DAT_020a0dd0 = *(undefined4 *)(iVar2 + 4);
    iVar2 = FUN_02087c84(0xc00100);
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar1 + 4));
    local_20[1] = 0x1000;
    FUN_0206c4d4(iVar2,local_20 + 1);
    FUN_02023894(*(undefined4 *)(iVar2 + 4),local_28 + 0xc00100,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_02028384(*(undefined4 *)(iVar2 + 4),0x2087a15);
    (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x1000);
    *(int *)(DAT_0214be24 + 0x10) = iVar2;
    FUN_0206c54c();
  }
  local_24 = param_4 << 0xc;
  local_20[0] = param_3 << 0xc;
  FUN_0206c9f8(iVar2,local_20,&local_24);
  return;
}

