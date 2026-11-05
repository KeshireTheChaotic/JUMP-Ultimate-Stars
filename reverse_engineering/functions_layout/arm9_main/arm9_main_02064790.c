
undefined4 FUN_02064790(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = OS_DisableInterrupts();
  uVar1 = DAT_020afb28;
  iVar3 = FUN_02063c78(&DAT_020afb3c);
  DAT_020afb28 = param_1;
  if (iVar3 != 0) {
    FUN_02063c20(&DAT_020afb3c);
  }
  OS_RestoreInterrupts(uVar2);
  return uVar1;
}

