
void FUN_0215dba4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0215d4e0();
  if (iVar2 != 0) {
    FUN_02157450(param_1,8);
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 **)(param_1 + 0x1d8) = &LAB_0215ddfc;
    *(undefined1 *)(param_1 + 0xdb) = 0;
    FUN_0215d82c(*(undefined4 *)(param_1 + 0x1a4),2);
  }
  cVar1 = *(char *)(param_1 + 0x1e8);
  if (cVar1 == '\x04') {
    FUN_02157450(param_1,4);
    if ((*(uint *)(param_1 + 0x6c) & 0x20) == 0) {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) = 0xfb43;
      cVar1 = *(char *)(param_1 + 0xdb) + '\x06';
    }
    else {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) =
           *(undefined2 *)(param_1 + 0xba);
      cVar1 = *(char *)(param_1 + 0xdb) + '\t';
    }
    *(char *)(param_1 + 0xdb) = cVar1;
    *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
  }
  else if (cVar1 == '\x05') {
    FUN_02157494(param_1,6,FUN_0215df18,FUN_0215e0c8,0,param_4);
  }
  else {
    *(char *)(param_1 + 0x1e8) = cVar1 + '\x01';
  }
  return;
}

