
void FUN_0218efe4(uint param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = OS_DisableInterrupts();
  bVar1 = false;
  uVar3 = *(uint *)(param_2 + 0x44);
  if ((uVar3 == *(uint *)(param_2 + 0x3c)) && (param_1 != 0)) {
    bVar1 = true;
  }
  if (param_1 < uVar3) {
    *(uint *)(param_2 + 0x44) = uVar3 - param_1;
    FUN_02002450(*(int *)(param_2 + 0x40),*(int *)(param_2 + 0x40) + param_1);
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = 0;
  }
  OS_RestoreInterrupts(uVar2);
  if (((*(char *)(param_2 + 8) != '\n') && (*(char *)(param_2 + 8) != '\v')) &&
     ((*(int *)(param_2 + 0x44) == 0 || (bVar1)))) {
    FUN_02190024(param_2,0x1b);
  }
  return;
}

