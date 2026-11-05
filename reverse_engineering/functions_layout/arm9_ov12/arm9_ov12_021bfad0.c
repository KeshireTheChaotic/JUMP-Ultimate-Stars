
void FUN_021bfad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  MIi_CpuClear16(0,param_1,0x4c0);
  *(undefined1 *)(param_1 + 0x4b2) = 0;
  iVar1 = FUN_021bfa54(*(undefined4 *)(param_2 + 0xc),param_1,1);
  iVar2 = FUN_021bfa54(*(undefined4 *)(param_2 + 0x10),param_1,0);
  if (iVar1 == 0 || iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x4b2) = 1;
    MIi_CpuClearFast(0,param_1,0x220);
  }
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x14);
  if (param_3 != 0) {
    MIi_CpuCopy16(param_3,param_1 + 0x220,0x16);
  }
  *(undefined1 *)(param_1 + 0x236) = *(undefined1 *)(param_2 + 0x18);
  uVar3 = FUN_021bf9cc(*(undefined4 *)(param_2 + 4));
  MIi_CpuCopy16(*(undefined4 *)(param_2 + 4),param_1 + 0x238,(uVar3 & 0x7fff) << 1);
  MIi_CpuCopy16(*(undefined4 *)(param_2 + 8),param_1 + 0x298,0xc0);
  *(undefined1 *)(param_1 + 0x358) = 1;
  *(undefined2 *)(param_1 + 0x35a) = 1;
  *(undefined2 *)(param_1 + 0x4b0) = 1;
  return;
}

