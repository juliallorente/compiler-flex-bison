.source teste.txt
.class public test
.super java/lang/Object
.method public <init>()V
	aload_0
	invokenonvirtual java/lang/Object/<init>()V
return
.end method
.method public static main([Ljava/lang/String;)V
.limit locals 100
.limit stack 100
iconst_0
istore 1
fconst_0
fstore 2
.line 2
iconst_0
istore 3
.line 3
iconst_0
istore 4
.line 4
iconst_0
istore 5
ldc 6
istore 3
ldc 1
istore 4
L_1:
iload 3
istore 5
L_2:
iload 5
ldc 1
if_icmpgt L_3
goto L_4
L_3:
iload 5
ldc 1
isub
istore 5
iload 4
iload 5
imul
istore 4
goto L_2
L_4:
iload 4
.line 17
iconst_0
istore 6
.line 18
iconst_0
istore 7
.line 19
iconst_0
istore 8
ldc 6
istore 6
iload 6
istore 8
L_5:
ldc 0
istore 7
L_6:
iload 7
iload 6
if_icmplt L_7
goto L_8
L_7:
iload 7
ldc 1
iadd
istore 7
iload 8
iload 7
iadd
istore 8
goto L_6
L_8:
iload 8
.line 32
iconst_0
istore 9
.line 33
iconst_0
istore 10
istore 9
istore 10
iload 9
iload 10
if_icmpeq L_9
goto L_10
L_9:
ldc 0
istore 1
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/println(I)V
goto L_11
L_10:
iload 10
ldc 120
if_icmpeq L_12
goto L_13
L_12:
ldc 1
istore 1
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/println(I)V
goto L_14
L_13:
ldc 2
istore 1
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/println(I)V
L_14:
L_11:
iload 9
istore 1
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/println(I)V
iload 10
istore 1
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/println(I)V
return
.end method
