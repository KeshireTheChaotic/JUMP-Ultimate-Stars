
/* JUS-GAME CommonTutorial::CommonTutorial_Create [source-string] __FILE__="CommonTutorial.cpp"
   __FUNCTION__="CommonTutorial_Create" lines=[99, 129, 134] passed to 4 source-location call(s) */

int * CommonTutorial::CommonTutorial_Create
                (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_18;
  
                    /* JUS-TAG strings=[" pGpG","CommonTutorial.cpp","CommonTutorial_Create"] */
  uStack_18 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0x74,s_CommonTutorial_cpp_0209dfa8,
                                     s_CommonTutorial_Create_0209deb4,99);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_020517fc(piVar1,0,0x74);
  if (param_2 != 0) {
    *(ushort *)((int)piVar1 + 0x6e) = *(ushort *)((int)piVar1 + 0x6e) | 2;
  }
  FUN_0206bc98(piVar1,param_1);
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  uStack_18 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&uStack_18);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_0206bd8c + 1);
  iVar2 = 0;
  do {
    iVar3 = thunk_FUN_0201a228(4,s_CommonTutorial_cpp_0209dfa8,s_CommonTutorial_Create_0209deb4,0x81
                              );
    iVar5 = 0;
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)
               thunk_FUN_0201a228(0xe8,s_CommonTutorial_cpp_0209dfa8,
                                  s_CommonTutorial_Create_0209deb4,0x81);
      if (puVar4 != (undefined4 *)0x0) {
        jus_Class_02094864::jus_Class_02094864();
        *puVar4 = &jus_Class_0209df0c::vftable;
        puVar4[0x38] = 0;
        puVar4[0x39] = 0;
      }
      iVar5 = FUN_020288dc(iVar3,puVar4);
    }
    piVar1[iVar2 + 8] = iVar5;
    FUN_0202894c(iVar5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  puVar4 = (undefined4 *)
           thunk_FUN_0201a228(0x18,s_CommonTutorial_cpp_0209dfa8,s_CommonTutorial_Create_0209deb4,
                              0x86);
  if (puVar4 != (undefined4 *)0x0) {
    jus_Class_02095814::jus_Class_02095814();
    *puVar4 = &jus_Class_0209df4c::vftable;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined2 *)((int)puVar4 + 10) = 0;
    *(undefined2 *)(puVar4 + 3) = 0;
    *(undefined2 *)((int)puVar4 + 0xe) = 0;
    *(undefined2 *)(puVar4 + 4) = 0x3c;
    *(undefined2 *)((int)puVar4 + 0x12) = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
  }
  piVar1[0xc] = (int)puVar4;
  FUN_02020910(puVar4);
  *(undefined2 *)(piVar1 + 0x1c) = 0;
  piVar1[4] = (int)(FUN_0206c0f4 + 1);
  piVar1[5] = (int)(FUN_0206c0f8 + 1);
  piVar1[6] = (int)(FUN_0206c0fc + 1);
  FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
  return piVar1;
}

