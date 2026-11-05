
undefined4 * FUN_02023fb0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    piVar1 = (int *)FUN_02012318(puVar3 + -8);
    iVar2 = (**(code **)(*piVar1 + 0x3c))();
    if (param_2 == iVar2) {
      if (param_3 == 0) {
        return puVar3 + -8;
      }
      param_3 = param_3 + -1;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

