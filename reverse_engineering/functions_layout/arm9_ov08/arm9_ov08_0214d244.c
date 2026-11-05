
void FUN_0214d244(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      bVar1 = FUN_0214d1fc(param_1);
      *(byte *)(param_2 + uVar2) = bVar1 ^ *(byte *)(param_3 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}

