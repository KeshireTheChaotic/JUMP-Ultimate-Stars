
void FUN_0214ecc0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 0x8bc) =
       *(uint *)(iVar1 + 0x8bc) & ~(1 << (param_2 & 0xff)) | param_3 << (param_2 & 0xff);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  return;
}

