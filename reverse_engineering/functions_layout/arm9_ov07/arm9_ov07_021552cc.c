
void FUN_021552cc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_2c;
  int local_28 [5];
  
  uVar4 = 10000;
  iVar3 = 4;
  do {
    iVar2 = FUN_0200d12c(param_2,uVar4);
    local_28[iVar3] = iVar2;
    FUN_0200d12c(param_2,uVar4);
    uVar4 = FUN_0200d12c(uVar4,10);
    iVar3 = iVar3 + -1;
    param_2 = extraout_r1;
  } while (0 < iVar3);
  local_28[0] = extraout_r1;
  if (local_28[4] == 0) {
    if (local_28[3] == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = 3;
      param_5 = param_4;
    }
  }
  else {
    iVar3 = 4;
    param_5 = param_3;
  }
  bVar1 = false;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    iVar2 = 0;
    if ((bVar1) || (iVar3 == 0)) {
      iVar2 = FUN_0203b404();
      iVar2 = FUN_021510f0(*(undefined4 *)(iVar2 + 0x88),0x8f0000,local_28[iVar3] + 0x15,0x80);
    }
    else {
      iVar5 = local_28[iVar3];
      if (iVar5 != 0) {
        bVar1 = true;
        iVar2 = FUN_0203b404();
        iVar2 = FUN_021510f0(*(undefined4 *)(iVar2 + 0x88),0x8f0000,iVar5 + 0x15,0x80);
      }
    }
    if (iVar2 != 0) {
      local_2c = param_5 << 0xc;
      FUN_02154fb4(iVar2,&local_2c);
      FUN_0214f48c(param_1,iVar2);
    }
    param_5 = param_5 + 6;
  }
  return;
}

