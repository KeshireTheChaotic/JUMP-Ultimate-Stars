
void FUN_02193b10(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  FUN_02192060(param_1,(int)(uint)*(ushort *)(param_2 + 2) >> 8 |
                       (*(ushort *)(param_2 + 2) & 0xff) << 8,
               uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00);
  return;
}

