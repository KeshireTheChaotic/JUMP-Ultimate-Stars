
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d11c(int *param_1)

{
  int iVar1;
  
  func_0x021b65cc();
  _DAT_021d514c = 0;
  func_0x021b7260(1);
  func_0x021b7260(2,0);
  func_0x021b7260(8,0);
  func_0x021b7260(4,0);
  func_0x021b7260(0x10000,0);
  if ((uint)*(byte *)((int)param_1 + 0x51) !=
      (uint)*(byte *)((uint)*(byte *)((int)param_1 + 0x52) * 0x48 + param_1[0xd] + 0x42)) {
    *(undefined1 *)((int)param_1 + 0x52) =
         *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x51) * 0x3c + param_1[0xc] + 0x2d);
  }
  if ((uint)*(byte *)((int)param_1 + 0x52) !=
      (uint)*(byte *)(param_1[0xe] + (uint)*(byte *)((int)param_1 + 0x53) * 0x40 + 0x2c)) {
    *(undefined1 *)((int)param_1 + 0x53) =
         *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x52) * 0x48 + param_1[0xd] + 0x38);
  }
  if ((uint)*(byte *)((int)param_1 + 0x53) !=
      (uint)*(byte *)(param_1[0x13] * 0x88 + param_1[0xf] + 10)) {
    param_1[0x13] =
         (uint)*(byte *)(param_1[0xe] + (uint)*(byte *)((int)param_1 + 0x53) * 0x40 + 0x31);
  }
  if ((char)param_1[0x16] == '\0') {
    FUN_02071afc(param_1[0x13],1);
  }
  else {
    FUN_02071afc(param_1[0x13],0);
  }
  FUN_020735e4();
  if (param_1[0x12] != 0) {
    FUN_0215122c();
    param_1[0x12] = 0;
  }
  if (param_1[2] != 0) {
    (*(code *)(&PTR_FUN_0215bd64)[*(byte *)((int)param_1 + 0x56)])();
    param_1[2] = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_0207535c();
  }
  if (param_1[0x11] != 0) {
    FUN_0207535c();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 3] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  if (param_1[10] != 0) {
    (**(code **)(**(int **)(param_1[10] + 4) + 0xc))();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_020afcb8 = (uint)*(byte *)(param_1 + 0x16) |
                 (uint)*(byte *)((int)param_1 + 0x56) << 4 |
                 (uint)*(byte *)((int)param_1 + 0x59) << 8;
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  (**(code **)(*(int *)param_1[1] + 8))();
  FUN_0201b244(param_1);
  return;
}

