
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e94a4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_3 + 1U & 0xfffffffe;
  if (&DAT_04805f60 < (undefined1 *)(param_2 + uVar1)) {
    iVar2 = uVar1 - ((int)&DAT_04805f60 - param_2);
    uVar1 = (int)&DAT_04805f60 - param_2;
  }
  else {
    iVar2 = 0;
  }
  MIi_CpuCopy16(param_2,param_1,uVar1);
  if (iVar2 != 0) {
    MIi_CpuCopy16((param_2 + uVar1) - (uint)*(ushort *)(_DAT_0380fff4 + 0x3de),param_1 + uVar1,iVar2
                 );
  }
  return;
}

