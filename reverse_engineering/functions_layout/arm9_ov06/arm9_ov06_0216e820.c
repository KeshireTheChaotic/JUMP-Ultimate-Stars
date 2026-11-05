
void FUN_0216e820(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x68) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x6c) =
       *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x6c);
  bVar1 = *(byte *)(*(int *)(param_2 + 0x10) + 0x175);
  *(byte *)(*(int *)(param_1 + 0x10) + 0x175) =
       *(byte *)(*(int *)(param_1 + 0x10) + 0x175) & 0xc0 | bVar1 & 3 | bVar1 & 0xc | bVar1 & 0x30;
  return;
}

