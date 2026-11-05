
undefined4 FUN_0214dc98(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_0214cf04(param_2,0,0x104);
  puVar2 = param_1;
  while( true ) {
    iVar1 = FUN_0214cdc4(*(undefined2 *)(puVar2 + 2));
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    switch(*puVar2) {
    case 0:
      FUN_0214cf10(param_2,puVar2 + 6);
      break;
    case 1:
      FUN_0214cf10(param_2 + 0x80,puVar2 + 6);
      break;
    case 2:
      FUN_0214cf10(param_2 + 0x100,puVar2 + 6);
      break;
    case 3:
    case 4:
      iVar1 = FUN_0214cdc4(puVar2[6]);
      if (iVar1 < 1) {
        return 0xfffffffe;
      }
      break;
    case 5:
      FUN_0214dc74(puVar2 + 6,iVar1);
      DAT_0216c1fc = FUN_0214cddc();
      break;
    case 6:
      FUN_0214dc74(puVar2 + 6,iVar1);
      DAT_0216c200 = FUN_0214cddc();
      break;
    default:
      return 0xffffffff;
    }
    if (*(short *)(puVar2 + 4) == 0) break;
    iVar1 = FUN_0214cdc4();
    puVar2 = param_1 + iVar1;
  }
  return 0;
}

