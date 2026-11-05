
void FUN_021694a4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((DAT_02172998 & 1) == 0) {
    DAT_0217299c = 0x1000;
    DAT_021729a0 = 0xe66;
    DAT_021729a4 = 0xccc;
    DAT_021729a8 = 0xb33;
    DAT_021729ac = 0x999;
    DAT_021729b0 = 0x800;
    DAT_021729b4 = 0x666;
    DAT_021729b8 = 0x4cc;
    DAT_021729bc = 0x333;
    DAT_021729c0 = 0x199;
    DAT_02172998 = DAT_02172998 | 1;
  }
  if ((DAT_02172990 & 1) == 0) {
    DAT_021729c4 = 0x1000;
    DAT_021729c8 = 0x1066;
    DAT_021729cc = 0x10cc;
    DAT_021729d0 = 0x1133;
    DAT_021729d4 = 0x1199;
    DAT_021729d8 = 0x1200;
    DAT_021729dc = 0x1266;
    DAT_021729e0 = 0x12cc;
    DAT_021729e4 = 0x1333;
    DAT_021729e8 = 0x1400;
    DAT_02172990 = DAT_02172990 | 1;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  bVar1 = *(char *)(param_1 + 0x39) + 1;
  *(byte *)(param_1 + 0x39) = bVar1;
  local_10 = (&DAT_0217299c)[bVar1];
  FUN_02169194(iVar2,&local_10);
  local_14 = (&DAT_021729c4)[*(byte *)(param_1 + 0x39)];
  FUN_021691b0(iVar2,&local_14);
  if (7 < *(byte *)(param_1 + 0x39)) {
    local_18 = 0;
    FUN_02169194(iVar2,&local_18);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
    *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) + '\x01';
  }
  return;
}

