
uint FUN_0218ef20(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  int local_24;
  int local_1c;
  int local_18;
  
  if (param_4 == 0) {
    uVar3 = (uint)*(ushort *)(param_3 + 0x2c);
  }
  else {
    uVar3 = 1;
  }
  local_18 = *(int *)(param_3 + 0x34) * 2 + 4;
  local_24 = param_1;
  local_1c = *(int *)(param_3 + 0x34);
  while( true ) {
    if ((param_2 == 0) || (*(char *)(param_3 + 8) != '\x04')) {
      return unaff_r4;
    }
    unaff_r4 = (uint)*(ushort *)(param_3 + 0x2e);
    if (uVar3 <= *(ushort *)(param_3 + 0x2e)) {
      unaff_r4 = uVar3;
    }
    if (DAT_021a84e4 < unaff_r4) {
      unaff_r4 = (uint)DAT_021a84e4;
    }
    if (param_4 == 0) {
      unaff_r4 = unaff_r4 & 0xfffffffe;
    }
    if (param_2 < unaff_r4) {
      unaff_r4 = param_2;
    }
    iVar1 = *(int *)(param_3 + 0x34);
    iVar2 = local_18 + (iVar1 - local_1c);
    local_18 = iVar2 + -1;
    if (iVar2 == 0) {
      unaff_r4 = 0;
    }
    if (unaff_r4 == 0) break;
    uVar3 = uVar3 - unaff_r4;
    FUN_021905b0(local_24,unaff_r4,param_3,0x18,0);
    FUN_02053008();
    local_24 = local_24 + unaff_r4;
    param_2 = param_2 - unaff_r4;
    local_1c = iVar1;
  }
  return 0;
}

