
void FUN_03801ef0(int param_1,uint param_2,undefined2 param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar2 < 0x10 && (param_2 != 0)); param_2 = param_2 >> 1) {
    if (((param_2 & 1) != 0) &&
       (pbVar1 = (byte *)FUN_03801770(&DAT_03808fe8 + param_1 * 0x24,iVar2), pbVar1 != (byte *)0x0))
    {
      *(undefined2 *)(pbVar1 + 0x1e) = param_3;
      *pbVar1 = *pbVar1 | 0x80;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

