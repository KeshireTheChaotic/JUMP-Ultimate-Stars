
void FUN_02165ecc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 auStack_18 [4];
  short local_14;
  short local_12;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  FUN_02165eb0(param_1,&local_14);
  FUN_02165d30(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c));
  FUN_02165074(param_1,(int)local_14,(int)local_12);
  FUN_021650a4(param_1,0);
  if (param_3 != 0) {
    FUN_02155998(auStack_18,*(undefined4 *)(param_1 + 0xc),0);
    if (param_1 != 0) {
      FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),
                 *(int *)(param_2 + 0x1c) + (uint)*(byte *)(param_2 + 0x27),0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68);
    (**(code **)(*piVar1 + 0xb8))(piVar1,auStack_18);
    *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (uint)*(byte *)(param_2 + 0x27);
  }
  FUN_0207cfe0(*(int *)(param_1 + 0x10),*(uint *)(*(int *)(param_1 + 0x10) + 0x150) & 0xff);
  FUN_0207d064(*(int *)(param_1 + 0x10),*(uint *)(*(int *)(param_1 + 0x10) + 0x150) & 0xff,0);
  FUN_0207d064(*(undefined4 *)(param_1 + 0x10),0x1000,0);
  FUN_02083b74(param_1,FUN_02165fe8,1);
  return;
}

