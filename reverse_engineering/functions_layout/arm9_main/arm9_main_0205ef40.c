
int FUN_0205ef40(int *param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(*param_1 + 0xc);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return *param_1 + 4;
    }
    if ((*puVar1 <= param_2) && (param_2 <= puVar1[1])) break;
    puVar1 = *(ushort **)(puVar1 + 2);
  }
  return (int)puVar1 + (uint)*(ushort *)((int)param_1 + 10) * (param_2 - *puVar1) + 8;
}

