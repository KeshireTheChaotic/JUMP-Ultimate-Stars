
void FUN_0215c278(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0215c2e0(*(undefined4 *)(param_1 + 0x1a8));
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if ((((iVar2 != 0 && cVar1 != '\x15') && cVar1 != '\b') && cVar1 != '\x17') && cVar1 != '\x18') {
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    FUN_02157494(param_1,0x15,FUN_0215c2f8,&DAT_0215c35c,0x10,param_4);
  }
  return;
}

