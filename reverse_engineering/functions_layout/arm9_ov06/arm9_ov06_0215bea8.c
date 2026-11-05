
undefined4 FUN_0215bea8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\b') {
    uVar3 = 0;
  }
  else if (cVar1 == '\x17') {
    uVar3 = 0;
  }
  else if (cVar1 == '\x18') {
    uVar3 = 0;
  }
  else {
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    FUN_02157450(param_1,0xe);
    FUN_02157494(param_1,0x13,FUN_0215bf34,0,0x10,param_4);
    if ((*(uint *)(param_1 + 0x128) & 0x100000) == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 0x14;
    }
    *(undefined1 *)(param_1 + 0x119) = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}

