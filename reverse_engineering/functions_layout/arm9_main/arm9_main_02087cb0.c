
void FUN_02087cb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28;
  int local_24;
  int local_20 [3];
  
                    /* JUS-TAG source_file_inferred="CommWrap.cpp" */
  local_28 = 0;
  if (*(int *)(DAT_0214be24 + 0x14) != 0) {
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(DAT_0214be24 + 0x14) + 4) + 100) + 0x10);
    if (((int)(uVar3 << 0x18) < 0) && ((int)(uVar3 << 0x1e) < 0)) {
      local_28 = 1;
    }
    else {
      local_28 = 0;
    }
  }
  local_20[2] = param_4;
  if (param_1 == 0) {
    param_2 = FUN_02087b70();
    param_4 = 0xa5;
    param_3 = 0xf7;
    *(undefined2 *)(DAT_0214be24 + 0x1c) = 0x147;
  }
  else {
    *(short *)(DAT_0214be24 + 0x1c) = (short)param_3;
  }
  *(short *)(DAT_0214be24 + 0x1e) = (short)param_4;
  *(short *)(DAT_0214be24 + 0x20) = (short)param_3;
  *(short *)(DAT_0214be24 + 0x22) = (short)param_4;
  *(char *)(DAT_0214be24 + 0x1b) = (char)param_1;
  if ((param_2 != *(char *)(DAT_0214be24 + 0x19)) || (iVar1 = 0, *(int *)(DAT_0214be24 + 0x14) != 0)
     ) {
    if (param_2 == 0) {
      iVar1 = FUN_0203b3f4();
    }
    else {
      iVar1 = FUN_0203b3e4();
    }
    iVar1 = *(int *)(iVar1 + 0x88);
    *(char *)(DAT_0214be24 + 0x19) = (char)param_2;
    if (*(int **)(DAT_0214be24 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_0214be24 + 0x14) + 8))();
    }
    FUN_02078f54();
    DAT_020a0dd0 = *(undefined4 *)(iVar1 + 4);
    iVar1 = FUN_02087c84(0xc00200);
    iVar2 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4));
    local_20[1] = 0x1000;
    FUN_0206c4d4(iVar1,local_20 + 1);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0xc00200,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    FUN_02028384(*(undefined4 *)(iVar1 + 4),0x2087a79);
    (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x1000);
    *(int *)(DAT_0214be24 + 0x14) = iVar1;
    FUN_0206c54c();
  }
  local_24 = param_4 << 0xc;
  local_20[0] = param_3 << 0xc;
  FUN_0206c9f8(iVar1,local_20,&local_24);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),local_28);
  return;
}

