
undefined4 FUN_0215bf70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\b') {
    uVar2 = 0;
  }
  else if (cVar1 == '\x17') {
    uVar2 = 0;
  }
  else if (cVar1 == '\x18') {
    uVar2 = 0;
  }
  else {
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    FUN_02157450(param_1,7);
    FUN_02157494(param_1,0x16,FUN_0215bff0,0,0x10,param_4);
    *(undefined1 *)(param_1 + 0x119) = 0x78;
    uVar2 = 1;
  }
  return uVar2;
}

