# <ins>Theory</ins>


An electromangetic wave travelling in the $z$-direction can be described as a linear combination of basis electric fields $\mathbf{E}_{x}$ and $\mathbf{E}_{y}$:

$$
\mathbf{E}(z,t) = \mathbf{E}_{x}(x,t) + \mathbf{E}_{y}(y,t) 
\\
\mathbf{E} = \mathbf{E}_{x0}e^{i(\omega t - kz + \delta_x)}\mathbf{\hat{x}} + \mathbf{E}_{y0} e^{i(\omega t - kz + \delta_y)}\mathbf{\hat{y}}
$$

with phase differences $\delta_x$ and $\delta_y$. The phase difference $\delta_x - \delta_y$ will lead to different states of polarization.


<figure>
  <img src="polarization.png" alt="Description for screen readers">
  <figcaption>$\textbf{Figure 1.}$ Polarization states with phase difference $\delta_x - \delta_y$ and $\delta_y - \delta_x$.</figcaption>
</figure>


The Jones vector is then defined using the basis vectors 

$$
\mathbf{\tilde{E}} = 
\begin{pmatrix}
    \mathbf{E}_{x0} e^{i(\omega t - kz + \delta_x)} \\
    \mathbf{E}_{y0} e^{i(\omega t - kz + \delta_y)}
\end{pmatrix}
$$

or in a simplified form

$$
\mathbf{\tilde{E}} = 
\begin{pmatrix}
    \mathbf{\tilde{E}}_{x}\\
    \mathbf{\tilde{E}}_{y}
\end{pmatrix}
$$

Where the light intensity is given as 

$$
I = I_x + I_y = |\mathbf{\tilde{E}}_{x}|^2 + |\mathbf{\tilde{E}}_{y}|^2
$$

In conventional ellipsometry relative changes in amplitude and phase are considered. Hence, the Jones vector is expressed using normalized light intensity, $I=1$. For a linearly polarized light at $\dfrac{\pi}{4}$

$$
\mathbf{E} = \dfrac{1}{\sqrt{2}} 
\begin{pmatrix}
1 \\
1
\end{pmatrix}
$$

and for left and right circular polarization 

$$
\mathbf{E}_{R} = \dfrac{1}{\sqrt{2}} 
\begin{pmatrix}
1 \\
i
\end{pmatrix}
\quad\quad
\mathbf{E}_{L} = \dfrac{1}{\sqrt{2}} 
\begin{pmatrix}
1 \\
-i
\end{pmatrix}
$$

Jones matrices can be used to describe the transformation of the polarization state of an EM wave by an optical element. For example, the Jones matrices for a polarizer and analyzer with transmission axis parallel to x-axis is

$$
\mathbf{P} = \mathbf{A} =
\begin{pmatrix}
    1 & 0 \\
    0 & 0
\end{pmatrix}
$$


Hence for a linearly polarized light at $\frac{\pi}{4}$ entering a polarizer the emerging light is

$$
\begin{pmatrix}
    E_x \\
    E_y
\end{pmatrix}
= \dfrac{1}{\sqrt{2}}
\begin{pmatrix}
    1 & 0 \\
    0 & 0
\end{pmatrix}
\begin{pmatrix}
    1 \\
    1
\end{pmatrix}
= \dfrac{1}{\sqrt{2}}
\begin{pmatrix}
    1 \\
    0
\end{pmatrix}
$$

In the above case the polarizer allows light only parallel to the $x$ axis to be transmitted. Sequential Jones matrices can be multiplied to the left of the Jones vector to when there are many optical elements present in a system. A compensator with a fast axis parallel to the $x$ axis would be given by 

$$
\mathbf{C} =
\begin{pmatrix}
    1 & 0 \\
    0 & e^{-i\delta}
\end{pmatrix}
$$

Light oscillating in the $x$ direction would propogate without changing whereas light oscillating in the $y$ direction would lag with relative phase difference $-\delta$. 














