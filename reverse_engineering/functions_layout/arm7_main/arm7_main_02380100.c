
/* JUS-SDK do_autoload [structural] first crt0 call; walks the autoload list (copy + bss clear) */

void do_autoload(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = &DAT_023a8698;
  puVar3 = (undefined4 *)&DAT_023801b0;
  do {
    if (puVar1 == (undefined4 *)0x23a86b0) {
      return;
    }
    puVar4 = (undefined4 *)*puVar1;
    piVar2 = puVar1 + 2;
    iVar5 = (int)puVar4 + puVar1[1];
    for (; (int)puVar4 - iVar5 < 0; puVar4 = puVar4 + 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    puVar1 = puVar1 + 3;
    puVar6 = (undefined4 *)((int)puVar4 + *piVar2);
    for (; puVar4 < puVar6; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  } while (puVar4 == puVar6);
  return;
}

