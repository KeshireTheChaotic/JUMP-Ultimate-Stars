
int FUN_0214eaa0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_78 [25];
  
  if ((DAT_02161de4 & 1) == 0) {
    local_78[0x16] = 0x1000;
    local_78[0x17] = 0x1000;
    local_78[0x18] = 0x1000;
    FUN_0214ecbc(&DAT_021609b8,local_78 + 0x18,local_78 + 0x17,local_78 + 0x16);
    local_78[0x13] = 0x1000;
    local_78[0x14] = 0x1000;
    local_78[0x15] = 0x1000;
    FUN_0214ecbc(&DAT_021609c8,local_78 + 0x15,local_78 + 0x14,local_78 + 0x13);
    local_78[0x10] = 0x1000;
    local_78[0x11] = 0x1000;
    local_78[0x12] = 0x1000;
    FUN_0214ecbc(&DAT_021609d8,local_78 + 0x12,local_78 + 0x11,local_78 + 0x10);
    local_78[0xd] = 0x1000;
    local_78[0xe] = 0x1000;
    local_78[0xf] = 0x1000;
    FUN_0214ecbc(&DAT_021609e8,local_78 + 0xf,local_78 + 0xe,local_78 + 0xd);
    local_78[10] = 0x1000;
    local_78[0xb] = 0x1000;
    local_78[0xc] = 0x1000;
    FUN_0214ecbc(&DAT_021609f8,local_78 + 0xc,local_78 + 0xb,local_78 + 10);
    local_78[7] = 0x1000;
    local_78[8] = 0x1000;
    local_78[9] = 0x1000;
    FUN_0214ecbc(&DAT_02160a08,local_78 + 9,local_78 + 8,local_78 + 7);
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[6] = 0;
    FUN_0214ecbc(&DAT_02160a18,local_78 + 6,local_78 + 5,local_78 + 4);
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_0214ecbc(&DAT_02160a28,local_78 + 3,local_78 + 2,local_78 + 1);
    DAT_02161de4 = DAT_02161de4 | 1;
  }
  FUN_0214e7ec(param_1);
  func_0x021c5fb4(*(undefined4 *)(param_2 + 4));
  iVar1 = FUN_0214e3ec();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305854;
  iVar2 = FUN_0203b404();
  piVar3 = *(int **)(iVar1 + 4);
  if (param_1 == *(int *)(iVar2 + 0x88)) {
    (**(code **)(*piVar3 + 0xfc))(piVar3,&DAT_021609b8 + param_3 * 0x10);
  }
  else {
    (**(code **)(*(int *)piVar3[0x19] + 0xa8))((int *)piVar3[0x19],param_3);
  }
  local_78[0] = param_4 << 0xc;
  FUN_0214ea78(iVar1,local_78);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214e850();
  return iVar1;
}

