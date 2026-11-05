
undefined1 FUN_02068600(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_020673ec(0x10);
  if (param_1 == 0) {
    MIi_CpuClear32(0,iVar2 + 0x300,0x144);
    uVar1 = FUN_02068578(iVar2);
    *(undefined1 *)(iVar2 + 0xd10) = uVar1;
  }
  else if (param_1 == 1) {
    uVar1 = FUN_02068390();
    *(undefined1 *)(iVar2 + 0xd10) = uVar1;
    uVar1 = FUN_02068354(iVar2);
    *(undefined1 *)(iVar2 + 0xd0f) = uVar1;
  }
  else if (param_1 == 2) {
    MIi_CpuClear32(0,iVar2 + 0x300,0x144);
    *(undefined1 *)(iVar2 + 0xd0f) = 0;
    uVar1 = FUN_020684cc(iVar2);
    *(undefined1 *)(iVar2 + 0xd10) = uVar1;
  }
  return *(undefined1 *)(iVar2 + 0xd10);
}

