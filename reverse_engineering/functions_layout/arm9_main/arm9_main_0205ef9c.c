
undefined4 FUN_0205ef9c(int *param_1,uint param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(ushort **)(*param_1 + 0x10);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return 0xffff;
    }
    if ((*puVar1 <= param_2) && (param_2 <= puVar1[1])) break;
    puVar1 = *(ushort **)(puVar1 + 4);
  }
  uVar2 = FUN_0205f034();
  return uVar2;
}

