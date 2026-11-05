
void FUN_021661c4(undefined4 param_1,int param_2)

{
  int iVar1;
  byte local_18 [4];
  char local_14 [8];
  
  local_18[0] = DAT_0216aeec;
  local_18[1] = DAT_0216aeed;
  local_18[2] = DAT_0216aeee;
  local_18[3] = DAT_0216aeef;
  local_14[0] = DAT_0216aee8;
  local_14[1] = DAT_0216aee9;
  local_14[2] = DAT_0216aeea;
  local_14[3] = DAT_0216aeeb;
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  iVar1 = FUN_020507a8((int)*(short *)(param_2 + 4) << 4,*(undefined2 *)(param_2 + 6));
  if ((local_18[*(byte *)(param_2 + 8)] & 1) != 0) {
    iVar1 = 0x10 - iVar1;
  }
  if ((local_18[*(byte *)(param_2 + 8)] & 0x10) != 0) {
    iVar1 = -iVar1;
  }
  if (param_2 == DAT_0216e840) {
    FUN_02065fec(&DAT_04001050,iVar1);
  }
  else {
    FUN_02065fec(&DAT_04000050,iVar1);
  }
  if ((int)(uint)*(ushort *)(param_2 + 6) <= (int)*(short *)(param_2 + 4)) {
    if (param_2 == DAT_0216e840) {
      FUN_02065fec(&DAT_04001050,(int)local_14[*(byte *)(param_2 + 8)]);
    }
    else {
      FUN_02065fec(&DAT_04000050,(int)local_14[*(byte *)(param_2 + 8)]);
    }
    *(undefined1 *)(param_2 + 9) = 0;
    FUN_021677a0(1,param_1);
  }
  return;
}

