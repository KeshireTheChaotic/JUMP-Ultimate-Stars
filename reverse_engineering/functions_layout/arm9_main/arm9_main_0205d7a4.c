
int FUN_0205d7a4(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = (uint *)FUN_0205c484();
  if (puVar1 == (uint *)0x0) {
    return 1;
  }
  uVar4 = 0;
  if (*puVar1 != 0) {
    puVar3 = puVar1 + 1;
    do {
      switch((char)*puVar3) {
      case '\0':
        iVar2 = FUN_0205d708(puVar3[1],*(undefined1 *)((int)puVar3 + 1),param_2,1);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x01':
        iVar2 = FUN_0205d55c(puVar3[1],*(undefined1 *)((int)puVar3 + 1),param_2,1);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x02':
        iVar2 = FUN_0205d4c0(puVar3[1],*(undefined1 *)((int)puVar3 + 1),param_2,1);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x03':
        iVar2 = FUN_0205d6a4(puVar3[1],*(undefined1 *)((int)puVar3 + 1),param_2,1);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 < *puVar1);
  }
  return 0;
}

