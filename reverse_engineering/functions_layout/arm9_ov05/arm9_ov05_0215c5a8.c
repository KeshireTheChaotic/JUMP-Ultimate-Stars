
void FUN_0215c5a8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [7];
  
  if (param_2 == 0) {
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x1ec) + 4),1);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x1ec) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x1ec) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    local_34[1] = 0;
    local_34[2] = 0;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x1ec),local_34 + 2,local_34 + 1);
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 500) + 4),1);
    FUN_0215c4a8(param_1,1);
    if (*(char *)(param_1 + 0x4e4) == '\x01') {
      iVar2 = 0;
      do {
        func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 0x1f0) + 4));
        local_34[0] = (int)(short)(&DAT_0216fd24)[iVar2 * 0x12] << 0xc;
        FUN_02150a10(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f0),local_34);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 4));
      local_38 = 0x100000;
      FUN_02150a10(*(undefined4 *)(param_1 + 0x1f8),&local_38);
    }
    else {
      iVar2 = 0;
      do {
        func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 0x1f0) + 4));
        local_3c = 0x100000;
        FUN_02150a10(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f0),&local_3c);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 4));
      local_40 = 0;
      FUN_02150a10(*(undefined4 *)(param_1 + 0x1f8),&local_40);
    }
  }
  else {
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x1ec) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x1ec) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    local_34[5] = 0;
    local_34[6] = 0x100000;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x1ec),local_34 + 6,local_34 + 5);
    iVar2 = 0;
    do {
      local_34[4] = 0;
      FUN_02150a10(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f0),local_34 + 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    local_34[3] = 0;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x1f8),local_34 + 3);
  }
  return;
}

