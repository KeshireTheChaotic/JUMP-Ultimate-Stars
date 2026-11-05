
void FUN_02041164(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  for (uVar4 = param_1[3]; uVar3 = *param_1, uVar4 < uVar3; uVar4 = uVar4 + 1) {
    *(undefined2 *)(param_1 + uVar4 * 2 + 4) = 0xc0;
  }
  uVar2 = param_1[3];
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar2 = (0x80 - uVar2) * 8;
  if (uVar2 < (0x20 - param_1[1]) * 0x20) {
    uVar2 = (0x20 - param_1[1]) * 0x20;
  }
  iVar1 = -uVar2;
  param_1[3] = uVar3;
  DC_FlushRange((int)param_1 + iVar1 + 0x410,uVar2,uVar3,uVar4,param_4);
  FUN_0205160c(DAT_0209dd40,(int)param_1 + iVar1 + 0x410,param_1[2] + iVar1 + 0x400,uVar2);
  *param_1 = 0x80;
  param_1[1] = 0x20;
  return;
}

