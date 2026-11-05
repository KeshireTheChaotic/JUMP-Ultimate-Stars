
undefined4 FUN_02054710(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  uVar1 = **(undefined4 **)(&DAT_020aadd4 + param_1 * 4);
  **(undefined4 **)(&DAT_020aadd4 + param_1 * 4) = param_2;
  OS_RestoreInterrupts();
  return uVar1;
}

